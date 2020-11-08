################################################################################
# Modified by Eugenio Pacceli in order to compile and link CUDA code with gcc's
# generated objects.
#
# You must have CUDA TOOLKIT 6, nvcc, gcc or g++ in order to run this Makefile.
# Tested on Debian testing/sid 64 bits, using the instructions in this article:
#
# http://prosciens.com/prosciens/how-to-install-nvidia-cuda-6-and-compile-all-the-samples-in-debian-testing-x86_64/
################################################################################
#
# Copyright 1993-2013 NVIDIA Corporation.  All rights reserved.
#
# NOTICE TO USER:
#
# This source code is subject to NVIDIA ownership rights under U.S. and
# international Copyright laws.
#
# NVIDIA MAKES NO REPRESENTATION ABOUT THE SUITABILITY OF THIS SOURCE
# CODE FOR ANY PURPOSE.  IT IS PROVIDED "AS IS" WITHOUT EXPRESS OR
# IMPLIED WARRANTY OF ANY KIND.  NVIDIA DISCLAIMS ALL WARRANTIES WITH
# REGARD TO THIS SOURCE CODE, INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE.
# IN NO EVENT SHALL NVIDIA BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL,
# OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
# OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
# OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE
# OR PERFORMANCE OF THIS SOURCE CODE.
#
# U.S. Government End Users.  This source code is a "commercial item" as
# that term is defined at 48 C.F.R. 2.101 (OCT 1995), consisting  of
# "commercial computer software" and "commercial computer software
# documentation" as such terms are used in 48 C.F.R. 12.212 (SEPT 1995)
# and is provided to the U.S. Government only as a commercial end item.
# Consistent with 48 C.F.R.12.212 and 48 C.F.R. 227.7202-1 through
# 227.7202-4 (JUNE 1995), all U.S. Government End Users acquire the
# source code with only those rights set forth herein.
#
################################################################################
#
# Makefile project only supported on Mac OS X and Linux Platforms)
#
###############################################################################
OSUPPER = $(shell uname -s 2>/dev/null | tr "[:lower:]" "[:upper:]")
OSLOWER = $(shell uname -s 2>/dev/null | tr "[:upper:]" "[:lower:]")

GCCFLAGS = gcc -g -Wall -Wfatal-errors

CFLAGS = -a selection -n 5 -s random -P

################################################################################
# This part modified by Eugenio Pacceli Reis da Fonseca
# DCC/UFMG
# Target rules
all: teste

teste: ./test/TestFoo.c ./mainCheck.c
	gcc -std=c99 -Wall -Wextra -Wpointer-arith -Wcast-align -Wwrite-strings -Wswitch-default -Wunreachable-code -Winit-self -Wmissing-field-initializers -Wno-unknown-pragmas -Wstrict-prototypes -Wundef -Wold-style-definition -Isrc -I./src ./src/unity.c ./array.c ./sort.c ./get_opt.c ./mainCheck.c test/TestFoo.c  test/test_runners/TestFoo_Runner.c -o test_foo.out
	./test_foo.out
	
cov: ./mainCheck_MAIN.c
	$(GCCFLAGS)  -fprofile-arcs -ftest-coverage ./array.c ./sort.c ./get_opt.c -o $@ ./mainCheck_MAIN.c
	./cov $(CFLAGS)
	gcov -b mainCheck_MAIN.c

check: ./mainCheck_MAIN.c
	cppcheck ./mainCheck_MAIN.c

valgrind: ./mainCheck_MAIN.c
	$(GCCFLAGS) ./array.c ./sort.c ./get_opt.c ./mainCheck_MAIN.c -o app
	valgrind --leak-check=full --show-leak-kinds=all ./app $(CFLAGS)

address: ./mainCheck_MAIN.c
	$(GCCFLAGS) -fsanitize=address ./array.c ./sort.c ./get_opt.c ./mainCheck_MAIN.c -o ./testeAdr
	./testeAdr $(CFLAGS)

clean:
	rm -f *.o
	rm -f *.out
	rm -fr test *.o cov* *.dSYM *.gcda *.gcno *.gcov
	rm -fr app
	rm -fr testeAdr


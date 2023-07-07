#!/bin/bash

gcc -c *.c
ar rcs lib_liball.a *.o

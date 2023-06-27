#!/bin/bash
#Creates a new static library (archive) from .o files

gcc -c ./*.c ; ar -rc liball.a ./*.o

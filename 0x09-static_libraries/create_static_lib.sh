#!/bin/bash
gcc -c ./*.c
ar rc ./*.o
rm ./*.o

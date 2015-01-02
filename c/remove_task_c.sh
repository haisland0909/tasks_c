#!/bin/bash

for name in `find ./ -name task.c` 
do
    git rm --cached ${name}
done

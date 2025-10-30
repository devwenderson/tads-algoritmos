#!/bin/bash

for i in $(cat q3.inputs.txt)
do
    echo "$i" | ./exe_q3 2> q3.outputs.txt
done
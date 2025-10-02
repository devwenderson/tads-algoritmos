#!/bin/bash

for i in $(cat q5.entradas.txt)
do
    echo "$i" | ./exe_q5 2>> q5.saidas.txt
done
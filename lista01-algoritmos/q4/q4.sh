#!/bin/bash

for i in $(cat q4.entradas.txt)
do
    echo "$i" | ./exe_q4 2>>q4.saidas.txt
done
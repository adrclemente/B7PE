#!/bin/bash

#Script de Bash que hemos usado para generar los datos. Gracias Manu por ayudarme.

rm quicksort_numOp.csv;
#rm quicksort_time.csv;
rm insertionsort_numOp.csv;
#rm insertionsort_time.csv;

for ((i=3;i<=100;i++)) do #3 al 100

echo "./quicksort_numOp.x <n"$i" >>quicksort_numOp.csv"|bash;
#echo "./quicksort_time.x <n"$i" >>quicksort_time.csv"|bash;
echo "./insertionsort_numOp.x <n"$i" >>insertionsort_numOp.csv"|bash;
#echo "./insertionsort_time.x <n"$i" >>insertionsort_time.csv"|bash;

done;

#./mean ... ;
#./mean ... ;

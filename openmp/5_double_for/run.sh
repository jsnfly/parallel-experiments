export OMP_NUM_THREADS=2  # more threads seems slower.

echo "-------ONLY OUTER-------"
gcc -fopenmp -o only_outer only_outer.c
time ./only_outer 2000 > /dev/null

echo "-------COLLAPSE-------"
gcc -fopenmp -o collapse collapse.c
time ./collapse 2000 > /dev/null

echo "-------BOTH-------"
gcc -fopenmp -o both both.c
time ./both 2000 > /dev/null

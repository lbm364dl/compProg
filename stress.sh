./generator > generator.in
./brute < generator.in 2> /dev/null > brute.out
./$1 < generator.in 2> /dev/null > $1.out
diff -u brute.out $1.out

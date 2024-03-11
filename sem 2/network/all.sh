echo "pls enter first no."
read a
echo "pls enter second no."
read b
echo "pls enter third no."
read c
echo "pls enter fourth no."
read d
f=$(($a + $b+$c+$d))
p=$(($a * $b * $c * $d))
s=$(echo "scale=2;($f)/4" |bc)

echo "avg" $s
echo "sum" $f
echo "product" $p

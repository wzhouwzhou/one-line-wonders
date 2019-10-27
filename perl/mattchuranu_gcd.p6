sub MAIN($i, $j) { { $j == 0 ?? say $i !! MAIN($j, $i%$j)}($j) }

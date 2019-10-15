sub MAIN($i) { if my @n = [0, 1] { (^(Int($i) - 1))>>.&{@n.push(@n[$_] + @n[$_ + 1]).say} } }

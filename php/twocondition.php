<?php

$score = 10;
$age = 20;
echo 'Taking into account your age and score, you are: ',($age > 10 ? ($score < 80 ? 'behind' : 'above average') : ($score < 50 ? 'behind' : 'above average')); // returns 'You are behind'
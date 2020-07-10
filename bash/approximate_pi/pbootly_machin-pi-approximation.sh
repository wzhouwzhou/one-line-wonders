#!/bin/bash

# Machin approximation of pi in bash with 100 terms
echo $(scale=100; seq 1 2 200 | xargs -n1 -I{} echo '16*(1/5)^{}/{}-4*(1/239)^{}/{}' | paste -sd-+) | bc -l

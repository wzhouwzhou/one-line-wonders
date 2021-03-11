<?php

function bubbleSort($array )
{
    do
    {
        $swap = false;
        for( $i = 0; $i < count($array); $i++ )
        {
            if( $array[$i] > $array[$i + 1] )
            {
                list( $array[$i + 1], $array[$i] ) =
                    array( $array[$i], $array[$i + 1] );
                $swap = true;
            }
        }
    }
    while( $swap );

    return $array;
}
$array = array(4,6,2,9,0,1,5,3,8,7);
echo "Original Array :\n";
echo implode(', ',$array );
echo "\nSorted Array\n:";
echo implode(', ',bubbleSort($array)). PHP_EOL;

#!/usr/bin/perl

my @array = (1,10,7,1,4);
my @unique = keys {map {$_ => 1} @array};
print @unique;

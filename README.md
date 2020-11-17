# ThreonineIdentifier

Author: Charles Condon

This program analyzes a given DNA strand and determines the locations of the triples that encode Threonine.  
Those triples are ACT, ACC, ACA, ACG.  

A reference for the DNA Codon Table can be found here: https://en.wikipedia.org/wiki/DNA_codon_table

This particular program prompts the user at the console to enter a DNA sequence.
It then iterates through each possible triple, checking if it could be a match for Threonine and then checking the two following characters.
If a triple is found then the console prints out which triple was found and where in DNA sequence it begins.
If no triple is found then the console prints -2 or a -1 if an invalid character is found in the sequence. 

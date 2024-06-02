**

## This Randomizer project is build with the time seed method

**

## **Demo**

V 1.0.0 demo : https://youtu.be/KtxYbc0f6xE


## Explanation
The Randomizer function, which generates random numbers, runs using the current system time as a "seed" to determine the number that will be generated later.

Time is a continuously running value, and it's difficult to determine the exact value of the current time because it has no limit, especially when using time based on EPOCH.

The modulo operator is used to determine the number of numbers that will be generated, with modulo acting as the range for the desired randomization result (end). Once the range is obtained, we only need to set the starting point for that range (start).


In summary:

1. Time
Time is used to build the Seed or Randomization Factor. Its value is constantly changing, and there is no exact value or time when the program is running.

3. Modulo
Modulo is used to determine the desired range of numbers.
The variable 'start' is used to hold the initial value to be output.
The variable 'end' is used to hold the end limit to be output.

3. Randomness
Time as a seeder ensures that the seed value always changes every time. This means that every time the program is executed, the seed value will be different, providing random variation in the randomization results.
This submission also ensures better randomization factors. This is because the Seeder is upgraded from the level of seconds to microseconds. So, when the program is executed on different devices, there are two guarantees of randomization. Firstly, it's almost impossible for the program to be executed simultaneously up to microsecond precision. Secondly, the seeder involves user device factors as well; CPU speed affects the generated seeder, as thread allocation and RAM at that time also affect how fast the program runs and the seed obtained.

## Usage :

1. clone this directory
	```
    git clone https://github.com/peepeds/Randomizer_clock.git
2. create env file
	```
    touch .env
3.  print your working directory
open your terminal and type / paste
	```
    pwd
    ```
    copy the message on your terminal
4.  edit .env file
open your .env file and type / paste
	```
    pwd = "paste your working directory"
5. create random file

    ```
    touch random
    ```
6. edit random file
paste this code
	```
	#!/bin/bash
	cd process.env.pwd
	./run.sh randomize.cpp
	```
7. change directory to bin & make file
	```
	cd 
	cd /usr/local/bin
	touch random
8.  edit random file
	``` 
	nano random
	```
	paste this code
	```
	#!/bin/bash
	cd /change this code exactly same as the value of your pwd or paste the value of output of step 3/
	./run.sh randomize.cpp
	```
	save the change

Congratss!! this program run globally in your device

## Limitations
This project can run both in windows / linux / mac, but temporarly only works globally in unix based device.
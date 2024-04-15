# stress-testing
This repository mainly contains a stress testing approach for C++ in Linux system using bash scripting


Every i suppose to find a test case where my program is not providing correct output, then here comes the stress testing part to rescue.

# Get ready for the Procedure
The directory contains some files correct.cpp which should have a bruteforce or correct solution. It will run against the random input as obeying the constraints.
Another file wrong.cpp will contain optimized code which i suppose to have a case that produces an incorrect verdict.
It also have a generator.cpp file that produces the random input.

# Running program
While running my solution against the bruteforce or the correct solution i have to edit all of these three files to ensure they ar working for same problem.
then i only run the bash program and it will produce the output according to the output matching.

# Find the culprit
If it stops before completing the full execution then input.txt contains a case for which correct.cpp and wrong.cpp are producing different output

```bash test.sh```

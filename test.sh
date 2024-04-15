for((i = 1; i <= 100; ++i)); do
    # Compile generator
    g++ -o generator generator.cpp

    # Compile correct solution
    g++ -o correct correct.cpp

    # Compile wrong solution
    g++ -o wrong wrong.cpp

    # Generate input
    ./generator $i > input.txt

    # Execute correct solution
    ./correct < input.txt > correct_solution_output.txt

    # Execute wrong solution
    ./wrong < input.txt > wrong_solution_output.txt

    # Compare outputs
    diff -w correct_solution_output.txt wrong_solution_output.txt || break

    echo "test $i is matching..."
done

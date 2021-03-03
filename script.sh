rm -r bin/* &> /dev/null

input_cpp=""

for d in src/*.cpp; do
    input_cpp+="${d} "
done
# echo "g++ $input_cpp -o bin/main.exe"

command_args=""

for word in "$*"; do
    command_args+="$word ";
done

g++ $input_cpp -o bin/main.exe

bin/main.exe $command_args
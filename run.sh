filename=$1  
echo "Processing $filename"
if [ ! -f "$filename" ]; then
    echo "No source code specified!"
    echo "To run, type: sh $0 FILENAME, where FILENAME is the name of your source code"
    exit
fi

prog_name="${filename%.*}"
if [ -f "$prog_name" ]; then
    rm -f $prog_name 
fi
echo "Executing gcc $filename -o $prog_name"
gcc $filename -o $prog_name 
if [ -f "$filename" ]; then
    echo "Running $filename"
    ./$prog_name
else
    echo "Could not build program!" 
fi


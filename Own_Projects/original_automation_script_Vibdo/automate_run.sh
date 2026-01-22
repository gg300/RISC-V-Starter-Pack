if [ $# -lt 1 ]; then
	echo "Usage: $0 <raw_init_file>"
	exit 1
fi

SIMULATION_PATH=~/Own_Projects/RVfpga_Basys3/Simulators/verilatorSIM_ViDBo/
RAW_INIT_FILE=$1

if [ ! -f "$RAW_INIT_FILE" ]; then
	echo "Error: File '$RAW_INIT_FILE' not found!"
	exit 1 
fi

echo "Python server starting on port 8000"
python3 -m http.server --directory ~/Own_Projects/RVfpga_Basys3/Simulators/verilatorSIM_ViDBo/Basys3board/ & SERVER_PID=$!

trap "kill $SERVER_PID" EXIT

sleep 3

echo "Regenerating simulation files"

make -C "$SIMULATION_PATH" clean

make -C "$SIMULATION_PATH"

/home/rvfpga/Own_Projects/RVfpga_Basys3/Simulators/verilatorSIM_ViDBo/Vrvfpgasim +ram_init_file="$RAW_INIT_FILE"

# ASMap Tool

Tool for performing various operations on textual and binary asmap files,
particularly encoding/compressing the raw data to the binary format that can
<<<<<<< HEAD
be used in Bitcoin Core with the `-asmap` option.
=======
be used in BitNova Core with the `-asmap` option.
>>>>>>> 5360f2baff (Initialized BitNova project)

Example usage:
```
python3 asmap-tool.py encode /path/to/input.file /path/to/output.file
python3 asmap-tool.py decode /path/to/input.file /path/to/output.file
python3 asmap-tool.py diff /path/to/first.file /path/to/second.file
```

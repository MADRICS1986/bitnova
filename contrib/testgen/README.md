### TestGen ###

<<<<<<< HEAD
Utilities to generate test vectors for the data-driven Bitcoin tests.
=======
Utilities to generate test vectors for the data-driven BitNova tests.
>>>>>>> 5360f2baff (Initialized BitNova project)

To use inside a scripted-diff (or just execute directly):

    ./gen_key_io_test_vectors.py valid 70 > ../../src/test/data/key_io_valid.json
    ./gen_key_io_test_vectors.py invalid 70 > ../../src/test/data/key_io_invalid.json

To use these files, create a QMK environment and copy the files into it.

```
qmk new-keyboard
```

For the 65 for the base layout, n for development board, and 21 for the microprocessor.

To compile, you can run

```
qmk compile -kb [name-of-keyboard] -km default
```

For example, if you named your keyboard `handwired/philipbl12` then you would run this to compile:

```
qmk compile -kb handwired/philipbl12 -km default
```

This will create a .uf2 file in the root directory of the qmk_firmware folder. This is what you will use to flash the RP2040.

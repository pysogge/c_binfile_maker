# Binmaker

Make a binary file of 1000 random integers.

## Usage

```bash
make
## will compile and run ./bin/binmaker
## will create a file called `out/random.bin` with 1000 random integers
```

## Run again (after make)

```bash
./bin/binmaker
```

## To read the hexfile

```bash
hexdump -C out/random.bin
```
```

## Clean up

```bash
make clean
```
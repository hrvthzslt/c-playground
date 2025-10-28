# HSHR

Prints the SHA-1 of a string that is passed as an argument. Implemented with bash and C, for presenting the changeable nature of executables.

Build the binary from C source and link it to `/usr/bin/hshr`:

```
make build
```

Link the script to `/usr/bin/hshr`:

```
make link
```

Call the program with a string argument:

```
hshr "string to hash"
```

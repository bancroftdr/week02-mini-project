# week02-mini-project

## Input/output contract

**Input:** 
    The input is on one line a temperature followed by its units e. g (0 C)

    The conversion direction is assumed to be from the input to the other unit eg. input units: c -> output units: f

**Output:** 
| Situation | Output |
|-----------|--------|
| Valid conversion | `Result: <value> <unit>` eg `Result: 32.00 F` |
| Direction is not `F` or `C` | `Unsupported direction` |
| Temperature missing or not a number | `Invalid input` |

## Acceptance tests

| Test | Input | Expected output |
|------|-------|-----------------|
| 1 | `0 C`    | `Result: 32.00 F`|
| 2 | `32 F`   | `Result: 0.00 C` |
| 3 | `50 A`   | `Unsupported direction` |
| 4 | `abc F`  | `Invalid input` |

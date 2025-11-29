/*
A few quirks worth knowing:
  • Whitespace in format specifiers (" %d") tells scanf to skip any whitespace in input.
  • %c does not skip whitespace—it grabs the next raw character, even a space or newline.
  • If the input doesn't match a specifier, scanf stops right there, like a dog refusing to fetch the wrong stick.
  • scanf returns the number of successful conversions.
*/
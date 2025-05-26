import sys
import time

def type_text(text, delay_ms=30):
    for char in text:
        sys.stdout.write(char)
        sys.stdout.flush()
        time.sleep(delay_ms / 1000.0)  # Convert ms to seconds

# Example usage
type_text("Hello, this is animated text in Python!", delay_ms=30)

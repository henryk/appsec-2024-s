from threading import Thread


def printer(character: str):
    for i in range(100):
        print(character*80)


threads = [Thread(target=printer, args=(c, )) for c in "ABCDEFGH"]
for thread in threads:
    thread.start()
for thread in threads:
    thread.join()



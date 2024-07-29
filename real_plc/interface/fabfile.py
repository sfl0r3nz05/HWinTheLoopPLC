from fabric import task
import threading
import subprocess
from time import sleep


def run_server():
    subprocess.run(["python3", "server.py"])

def run_client():
    subprocess.run(["python3", "plcsend.py"])

@task
def run_concurrent(c):
    server_thread = threading.Thread(target=run_server)
    client_thread = threading.Thread(target=run_client)

    server_thread.start()
    sleep(2)
    client_thread.start()

    server_thread.join()
    client_thread.join()

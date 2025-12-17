from pynput import mouse, keyboard
import threading
import time

# liandian.py
# 说明：按下 g 切换鼠标右键连点（20Hz）。按 Esc 退出。
# 需要安装 pynput：pip install pynput


CLICK_INTERVAL = 1.0 / 100.0 

mouse_ctrl = mouse.Controller()
running = threading.Event()
stop_flag = threading.Event()

def click_loop():
    while not stop_flag.is_set():
        if running.is_set():
            mouse_ctrl.click(mouse.Button.right)
            time.sleep(CLICK_INTERVAL)
        else:
            time.sleep(0.01)

def on_press(key):
    try:
        if key.char == 'g':
            if running.is_set():
                running.clear()
                print("连点已关闭")
            else:
                running.set()
                print("连点已开启")
    except AttributeError:
        if key == keyboard.Key.esc:
            #stop_flag.set()
            print("退出中...")
            #return False  # 停止监听

if __name__ == "__main__":
    t = threading.Thread(target=click_loop, daemon=True)
    t.start()
    with keyboard.Listener(on_press=on_press) as listener:
        listener.join()
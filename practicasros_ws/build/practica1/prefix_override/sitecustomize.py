import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rod-0310/Escritorio/practicasros_ws/install/practica1'

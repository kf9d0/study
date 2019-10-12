(tf2) root@robot-O-E-M:/home/robot/dev/tf# pip install matplotlib
Collecting matplotlib
  Downloading https://files.pythonhosted.org/packages/19/7a/60bd79c5d79559150f8bba866dd7d434f0a170312e4d15e8aefa5faba294/matplotlib-3.1.1-cp37-cp37m-manylinux1_x86_64.whl (13.1MB)
     |████████████████████████████████| 13.1MB 1.4MB/s 
Collecting kiwisolver>=1.0.1 (from matplotlib)
  Downloading https://files.pythonhosted.org/packages/93/f8/518fb0bb89860eea6ff1b96483fbd9236d5ee991485d0f3eceff1770f654/kiwisolver-1.1.0-cp37-cp37m-manylinux1_x86_64.whl (90kB)
     |████████████████████████████████| 92kB 286kB/s 
Collecting pyparsing!=2.0.4,!=2.1.2,!=2.1.6,>=2.0.1 (from matplotlib)
  Downloading https://files.pythonhosted.org/packages/11/fa/0160cd525c62d7abd076a070ff02b2b94de589f1a9789774f17d7c54058e/pyparsing-2.4.2-py2.py3-none-any.whl (65kB)
     |████████████████████████████████| 71kB 1.7MB/s 
Requirement already satisfied: numpy>=1.11 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from matplotlib) (1.17.2)
Collecting cycler>=0.10 (from matplotlib)
  Downloading https://files.pythonhosted.org/packages/f7/d2/e07d3ebb2bd7af696440ce7e754c59dd546ffe1bbe732c8ab68b9c834e61/cycler-0.10.0-py2.py3-none-any.whl
Collecting python-dateutil>=2.1 (from matplotlib)
  Downloading https://files.pythonhosted.org/packages/41/17/c62faccbfbd163c7f57f3844689e3a78bae1f403648a6afb1d0866d87fbb/python_dateutil-2.8.0-py2.py3-none-any.whl (226kB)
     |████████████████████████████████| 235kB 1.9MB/s 
Requirement already satisfied: setuptools in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from kiwisolver>=1.0.1->matplotlib) (41.4.0)
Requirement already satisfied: six in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from cycler>=0.10->matplotlib) (1.12.0)
Installing collected packages: kiwisolver, pyparsing, cycler, python-dateutil, matplotlib
Successfully installed cycler-0.10.0 kiwisolver-1.1.0 matplotlib-3.1.1 pyparsing-2.4.2 python-dateutil-2.8.0

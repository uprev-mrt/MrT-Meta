mrt-gen 
=======

Code Templates 
--------------

``mrt-gen`` is a tool used to create common project components. By default it creates plain .h/.c files 


.. code-block:: bash 

    mrt-gen src/test 

This creates ``src/test.h`` and ``src/test.c``. Adding '-t cpp' will create ``src/test.h`` and ``src/test.cpp``


Creating Sphinx documentation 
-----------------------------

If a ``--type`` is not specified, and the path ends with ``docs``, it will create a docs folder with a sphinx template. 

.. code:: bash 

    mrt-gen ./docs 


.. code-block:: txt

    docs
    ├── Makefile
    ├── assets
    │   └── diagrams
    │       └── samplediagram.dio.png
    ├── conf.py
    ├── index.rst
    └── pages
        └── samplepage.rst

This can be used to generate an html or pdf version of the documentation

.. code:: bash 

    cd docs 
    make latexpdf 
    make html


MrT Module Template 
-------------------

using the ``-m`` flag will create an MrT submodule with the required items. 

.. code:: bash 

    mrt-gen -m mymodule 

.. code:: txt 

    └── mymodule
        ├── README.rst
        ├── mrt.yml
        ├── mymodule.c
        ├── mymodule.h
        └── mymodule_UT.cpp


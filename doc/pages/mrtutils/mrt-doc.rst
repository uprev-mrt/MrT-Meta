mrt-doc 
=======

``mrt-doc`` is a tool used for documentation in projects. It gathers all of the mrt.yml files from the modules and creates a master ``mrt.yml`` in the root MrT directory. It can also be used to combine all of the documentationusing the ``-d`` flag. 

.. code-block:: bash 

    mrt-doc -d docs/moddocs 

This will create the directory ``docs/moddocs`` and populate it with a folder structure that matches the structure of the modules, along with any README files. Each directory in the structure will contain an ``index.rst`` containing a ``toctree`` for that folder. 

.. note:: Currently supported file types are `reStructuredText`_ and `Markdown`_


Example project contain some MrT modules:

.. code-block:: txt

    docs 
    └── moddocs
        ├── Devices
        │   ├── RegDevice
        │   │   └── README.rst
        │   ├── Sensors
        │   │   ├── HTS221
        │   │   │   └── README.rst
        │   │   └── index.rst
        │   └── index.rst
        ├── Platforms
        │   ├── Atmel
        │   │   └── README.md
        │   ├── Common
        │   │   └── README.md
        │   └── index.rst
        ├── Utilities
        │   ├── COBS
        │   │   └── README.md
        │   ├── JSON
        │   │   └── README.md
        │   ├── PolyPacket
        │   │   └── docs
        │   │   │   └── logo.png
        │   │   └── README.rst
        │   └── index.rst
        └── index.rst

.. note:: If you would like to include additional files (documents, pictures, etc) in a submodules documentation, add them to a ``docs`` folder in the submodule. This folder will also be copied into the structure.
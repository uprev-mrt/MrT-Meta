Notes 
===== 


Update all submodules 
---------------------

To push an update to all submodules, make changes then run: 

.. code:: bash 

    git submodule foreach 'git checkout master'
    git submodule foreach 'git commit --allow-empty -am "message"'
    git submodule foreach 'git push origin master'
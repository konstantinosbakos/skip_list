# Skip List [![Project Status: Inactive – The project has reached a stable, usable state but is no longer being actively developed; support/maintenance will be provided as time allows.](https://www.repostatus.org/badges/latest/inactive.svg)](https://www.repostatus.org/#inactive) [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)




## Contents
### bin
- Contains a demo main function to showcase the data structure.
- Contains the MakeFile used to compile the project.
### src
- Contains the source code of the project.
## Compilation
Please type `make` inside the `skip_list/bin` folder.\
After that, type `./skiplist` to run the program.\
To delete the objective files and the executable type `make clean`
## Insight
The project consists of two classes, **skip_node** and **skip_list**.
### skip_node
- The skip_node is a node that participates in the skip_list.
- A skip_node contains its ID (int value) and the levels of the skip_list that it participates in.
- A skip_node can be modified to contain any type of data structure that has an identification number.
### skip_list
- A skip list is a probabilistic data structure that allows `O(logn)` search complexity as well as `O(logn)` insertion and deletion complexity within an ordered sequence of `n` elements.
- The skip list implemented is *not* a perfect skip list.
- The height of the skip list is always log<sub>2</sub>n. After every insertion (or removal), the number of nodes is checked and if a level is needed to be added (or removed), the skip list is regenerated, so that it is of maximum efficiency.
- The length of each individual list is always greater than `max_level - level + 1` and always less than the length of the list below it. This enhances the efficiency of the structure.
- The functions that the skip_list contains are:
   - `print()`
   - `insert()`
   - `remove()`
   - `search()`

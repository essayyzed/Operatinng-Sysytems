#Paging
Operating System divides the Memory in Equal Size Chunk which we call *Pages*. And the management of Memory in Pages is known as **Paging**

#Why Paging?
##Protection:
To understand this we should know that *How malware Works?*. Malware is located in some page of the *RAM* where it goes to the segment where the return Address is present hence it's executed there, and perform it malicious activity there. But, wait!! we can stop this by making that specific page of the memory write only. Hence if by some way that malware goes into there it cannot perform its malicious operation. Doing this we can achieve 90% of the security.

##Sharing:
Second advantage of *Paging* is that it made the *Memory Sharing* easy. This is achieve by page granularity where the virtual memory share a specified page. But it take care that a process stay in its own address space  and shouldn't stay in any other memory space.

##Swap Spaces:
Swap Space or Swap Area is the partition in the Physical Memory which used by the Operating System when RAM gets full. It manages that by the process of *Demand Paging* in which that pages which is required for use goes into the RAM and when its operation gets done then goes into the SWAP AREA. The Pages which has modified data i.e. not empty is called *DIRTY* and the one which is not modified is known as **CLEAN*

##Cache Coherence:
We know that CPU is the fastest memory and Hard-Disk is slow. In between these, two other type of memories exist one is RAM which is *FASTER* than Hard-Disk but slower than *Cache* & *CPU* . Second, is *Cache* which is FASTER then both  RAM & Hard-Disk. But slower than that of CPU. Cache make the processing more fast. The only requirement for the Cache is that it should know that what should be the next thing that I am going to process. For Example, we widely use array based Data-Structures let say *Python's List*  which is Contagious. So in that case we can use the Cache to make our process fast. But it cannot be used in *Pointer Based Structure*. Because there the memory is not contiguous

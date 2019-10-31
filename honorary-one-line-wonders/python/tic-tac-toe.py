import itertools
import time
hello_user_1=input("Your name --user_1")
hello_user_2=input("your name --user_2")
print("\t \t","Hello")
print("*******You are playing Tic-tac-toe*******\n")
print("\t\tCurrent Timing\n")
localtime=time.asctime(time.localtime(time.time()))
print("\t",localtime)


#.........For malist_of_tuples_made_up_of_combinationsng permutations........#

#....My board....#
possibilities=["a1","a2","a3","b1","b2","b3","c1","c2","c3"]
l_changer=["a1","a2","a3","b1","b2","b3","c1","c2","c3"]
print("|"+l_changer[0]+"|"+l_changer[1]+"|"+l_changer[2])
print("----------")
print("|"+l_changer[3]+"|"+l_changer[4]+"|"+l_changer[5])
print("----------")
print("|"+l_changer[6]+"|"+l_changer[7]+"|"+l_changer[8])
#...Intialising y as 1...#
y=1
user_input_list=[]
options_for_checkboard_x_or_o=["o","x"]
while y==1:
  user_1=input("Choose 'x' or 'o'").lower()
  user_input_list.append(user_1)
  for ii in options_for_checkboard_x_or_o:
    if ii==user_1:
      y=999
      break
    else:
      y=1
      continue
for i in user_input_list:
  if i=="x":
    user_2="o"
  else:
    user_2="x"
print("\n",hello_user_1, "will play with",user_1,"\n")
print("while" ,hello_user_2, "will play with ", user_2,"\n")
n=0
user_1_input_list=[]
user_2_input_list=[]
Total_combinations_List=[["a1","a2","a3"],["b1","b2","b3"],["c1","c2","c3"],["a1","b2","c3"],["c1","b2","a3"],["a1","b1","c1"],["a2","b2","c2"],["a3","b3","c3"]]
list_of_tuples_made_up_of_combinations=[]
for o in Total_combinations_List:
  z=tuple(o)
  list_of_tuples_made_up_of_combinations.append(z)
y=1
user_1_score=0
user_2_score=0
condition_to_run_loop="ee"
nnnn=0

while condition_to_run_loop!="":
  y=1
  possibilities=["a1","a2","a3","b1","b2","b3","c1","c2","c3"]
  user_1_input_list.clear()
  user_2_input_list.clear()
  l_changer=["a1","a2","a3","b1","b2","b3","c1","c2","c3"]
  print("|"+l_changer[0]+"|"+l_changer[1]+"|"+l_changer[2])
  print("----------")
  print("|"+l_changer[3]+"|"+l_changer[4]+"|"+l_changer[5])
  print("----------")
  print("|"+l_changer[6]+"|"+l_changer[7]+"|"+l_changer[8])
  print("\n")

  while y==1:
    print(possibilities,"\n")
    print("Choose number from 1 to",len(possibilities),"to match the corresponding list")
    print(hello_user_1)
    uu=int(input("User_1 Enter an Integrr from above"))
    print("\n")
    index_actual_1=uu-1
    user_1_input_list.append(possibilities[index_actual_1])
    pp=l_changer.index(possibilities[index_actual_1])
    l_changer[pp]=user_1
    print("|"+l_changer[0]+"|"+l_changer[1]+"|"+l_changer[2])
    print("----------")
    print("|"+l_changer[3]+"|"+l_changer[4]+"|"+l_changer[5])
    print("----------")
    print("|"+l_changer[6]+"|"+l_changer[7]+"|"+l_changer[8])
    print("\n")
    
    possibilities.remove(possibilities[index_actual_1])
    combo=list(itertools.permutations(user_1_input_list,3))
    for i in combo:
      for e in range(0,len(list_of_tuples_made_up_of_combinations)):
        if i==list_of_tuples_made_up_of_combinations[e]:
          print("yes")
          print("User_1 WON")
          user_1_score+=1
          y=3
          break
        else:
          pass
    if user_1_score==nnnn+1:
      break
    print(possibilities,"\n")
    print("Choose number from 1 to",len(possibilities),"to match the corresponding list")
    if len(possibilities)==0:
      print("\n","Game is draw","\n")
      break
    print(hello_user_2)
    vv=int(input("User_2 Enter an Integrr from above"))
    print("\n")
    index_actual_2=vv-1
    user_2_input_list.append(possibilities[index_actual_2])
    ppq=l_changer.index(possibilities[index_actual_2])
    l_changer[ppq]=user_2
    print("|"+l_changer[0]+"|"+l_changer[1]+"|"+l_changer[2])
    print("----------")
    print("|"+l_changer[3]+"|"+l_changer[4]+"|"+l_changer[5])
    print("----------")
    print("|"+l_changer[6]+"|"+l_changer[7]+"|"+l_changer[8])
    print("\n")
    
    possibilities.remove(possibilities[index_actual_2])
    fggg=list(itertools.permutations(user_2_input_list,3))
    for tt in fggg:
      for et in range(0,len(list_of_tuples_made_up_of_combinations)):
        if tt==list_of_tuples_made_up_of_combinations[et]:
          print("yes","\n")
          print("user_2 WON","\n")
          user_2_score+=1
          y=3
          break
        else:
          pass
  print("user_1_score",user_1_score)
  print("user_2_score",user_2_score,"\n")
  nnnn+=1
  condition_to_run_loop=input("Enter any key to continue or press enter to quit")

  

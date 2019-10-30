//Importing necessary packages
import java.util.*;

// A Binary Tree node
class Node{
	int data;
	Node left, right;
    	Node(int item){
       		data = item;
        	left = right = null;
    	}
}

// Sample input : 1                         
//                3
//                1 2 L 1 3 R      Tree
//                		     1
//                		    / \
//                		   2   3
// Sample Output: 2                

class height_binary_tree{
	//one line height function
	int height(Node root) { return (root != null) ? Math.max(height(root.left), height(root.right)) + 1 : 0;}

	// driver function to test the height function
    	public static void main(String args[]){
		// Input the number of test cases you want to run
     		Scanner sc = new Scanner(System.in);
        	int t = sc.nextInt();
        	while (t > 0){
            		HashMap<Integer, Node> hashMap = new HashMap<Integer, Node> ();
            		int n = sc.nextInt();//number of nodes in the binary tree
            		Node root=null;
            		while (n > 1){
                		int parentValue = sc.nextInt();//parent node value
                		int childValue = sc.nextInt();//new node value
                		char leftOrRight = sc.next().charAt(0);//L or R to determine whether to insert the new node to the left(L) of right(R)
                		Node parent = hashMap.get(parentValue);
                		if (parent == null){
                    			parent = new Node(parentValue);
                    			hashMap.put(parentValue, parent);
                    			if (root == null)
                        			root = parent;
                		}
                		Node child = new Node(childValue);
                		if (leftOrRight == 'L')
                    			parent.left = child;
                		else
                    			parent.right = child;
                			hashMap.put(childValue, child);
                		n--;
            		}
			//Create an object of the class
            		height_binary_tree obj = new height_binary_tree();
			//Test the one line function
			System.out.println(obj.height(root));
         		t--;
        	}	
    	}
}



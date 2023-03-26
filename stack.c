using System;

namespace Stack {
    public class Stack {
        private int[] arr;
        private int top;

        public Stack (int capacity) {
            this.arr = new int[capacity];
            this.top = -1;
        }

        public void Push (int data) {
            if (this.IsFull ()) {
                throw new ApplicationException ("Stack is Full");
            } else {
                this.arr[++top] = data;
            }
        }

        public int Pop () {
            int rtnData = -1;
            if (this.IsEmpty ()) {
                throw new ApplicationException ("Stack is Empty");
            } else {

                rtnData = this.arr[this.top];
                this.arr[this.top] = 0;
                this.top--;
            }
            return rtnData;
        }

        public int Peek () {
            if (this.IsEmpty ()) {
                throw new ApplicationException ("Stack is Empty");
            } else {
                return this.arr[this.top];
            }
        }

        public bool IsFull () {
            return this.top == this.arr.Length - 1;
        }

        public bool IsEmpty () {
            return this.top == -1;
        }
    }
}

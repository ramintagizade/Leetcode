import java.util.*;

public class EmployeeImportance {

    class Employee {

        // unique id of this employee
        public int id;

        // the importance value of this employee
        public int importance;

        // the id of direct subordinates
        public List<Integer> subordinates;

        public Employee(int id,int importance, List<Integer> subordinates)  {
            this.id = id;
            this.importance = importance;
            this.subordinates = subordinates;
        }
    };


    class Solution {
        private int [] visited;
        private int importance = 0;
        private Map<Integer,Integer> mapIds;

        public int getImportance(List<Employee> employees, int id) {
            visited = new int[employees.size()+1];
            mapIds = new HashMap<>();
            for(int i=0;i<employees.size();i++){
                mapIds.put(employees.get(i).id,i);
            }

            dfs(employees,id);
            return importance;
        }

        public void dfs(List<Employee> employees, int id ) {
            id = mapIds.get(id);
            if(visited[id]==0) {
                importance+=employees.get(id).importance;
            }
            visited[id] = 1;
            for(int childId : employees.get(id).subordinates) {
                if(visited[mapIds.get(childId)]==0) {
                    dfs(employees,childId);
                }
            }
        }
    }



    public static void main(String [] args ) {

        EmployeeImportance employeeImportance = new EmployeeImportance();
        Solution solution = employeeImportance.new Solution();

        List<Employee> employees = new ArrayList<>();
        employees.add(employeeImportance.new Employee(1,5,Arrays.asList(2,3)));
        employees.add(employeeImportance.new Employee(2,3,Arrays.asList()));
        employees.add(employeeImportance.new Employee(3,3,Arrays.asList()));

        int importance = solution.getImportance(employees,1);
        System.out.println(importance);
    }
}

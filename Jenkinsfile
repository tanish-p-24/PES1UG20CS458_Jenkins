pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'g++ -o hello ./main/hello.cpp'
               
            }
        }
        stage('Test') {
            steps {
                sh './hello_exec.out'
            }
        }
      
    }

    post {
        failure {
            echo 'pipeline failed'
        }
    }
}

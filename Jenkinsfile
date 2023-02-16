pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh './main/Makefile'
               
            }
        }
        stage('Test') {
            steps {
                sh './hello_exec.out'
            }
        }
      
    }

    post {
        always {
            junit '**/test-results.xml'
        }
        failure {
            echo 'pipeline failed'
        }
    }
}

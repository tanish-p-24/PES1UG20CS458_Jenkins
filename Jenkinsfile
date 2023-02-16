pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'Makefile'
               
            }
        }
        stage('Test') {
            steps {
                sh './hello_exec.out'
            }
        }
        stage('Deploy') {
            steps {
                sh 'make install'
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

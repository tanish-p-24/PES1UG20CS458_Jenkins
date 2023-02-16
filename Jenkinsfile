pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'make'
               
            }
        }
        stage('Test') {
            steps {
                sh './a.out'
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

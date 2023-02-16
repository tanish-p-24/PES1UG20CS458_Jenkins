pipeline {
    agent any

    stages {
        stage('Build Stage') {
            steps {
                sh 'make'
            }
        }
        stage('Testing Stage') {
            steps {
                sh './test'
            }
        }
        stage('Deploy Stage') {
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
